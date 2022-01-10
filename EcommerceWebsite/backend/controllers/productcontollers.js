const Product = require("../models/productModels");
const ErrorHandler = require("../utils/errorhandler");
const catchAsyncErrors=require("../middleware/catchAsyncErrors");
const Apifeatures=require("../utils/apifeatures");
// Create Product
exports.createProduct = catchAsyncErrors(async (req,res,next)=>{
    const product=await Product.create(req.body);
    res.status(201).json({
        success:true,
        product
    });
})

//Get All Product--admin
exports.getAllProducts =catchAsyncErrors(async (req,res)=>{

    const resultPerPage=5;
    // for Dashboard
    const productCount = await Product.countDocuments();
    console.log(productCount);

    const apiFeature = new Apifeatures(Product.find(),req.query)
    .search()
    .filter().pagination(resultPerPage);
    const products= await apiFeature.query ;    // for particular keyword
    // const products= await Product.find(); // for all

    res.status(200).json({
        success:true,
        products,
        productCount
    });
});

// Update Product --admin
exports.updateProduct =catchAsyncErrors(async (req,res,next)=>{
    let product = await Product.findById(req.params.id);

    if(!product){
        return next(new ErrorHandler("Product not found",404));
    }
    product=await Product.findByIdAndUpdate(req.params.id,req.body,{new:true,runValidators:true,useFindAndModify:false});
    res.status(200).json({
        success:true,
        product
    });
});

//deleteProduct--admin
exports.deleteProduct =catchAsyncErrors(async(req,res,next)=>{
    const product =await Product.findById(req.params.id);
    if(!product){
        return next(new ErrorHandler("Product not found",404));
    }
    await product.remove();
    res.status(200).json({
        success:true,
        message:"Product deleted Successfully"
    })  
});

//Get Product Details
exports.getProductDetails=catchAsyncErrors(async(req,res,next)=>{
    const product =await Product.findById(req.params.id);
    if(!product){
        return next(new ErrorHandler("Product not found",404));
    }
    res.status(200).json({
        success:true,
        product
    });
});