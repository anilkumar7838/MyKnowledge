// const e = require('express');
const express = require('express');
const path = require('path');
const blogs = require('../data/blogs')

const router = express.Router();


router.get('/', (req, res) => {
    // res.sendFile(path.join(__dirname, "../templates/index.html")); // first
    res.render('home');
});

router.get('/blog', (req, res) => {
    // method 1
    // blogs.forEach(ele => {
    //     console.log(ele.title)
    // });

    // method 2
    // Array.from(blogs).forEach(ele => { // Remember Carefully
    //     console.log(ele.title)
    // });

    // method 3
    // Array.from(blogs, ele => {
    //     console.log(ele.title)
    // });

    // res.sendFile(path.join(__dirname, "../templates/blogPage.html"));

    res.render('blogHome', {
        blogs: blogs
    });
});

router.get('/blogPost/:slug', (req, res) => {
    // console.log(req.params.slug);
    myblog = blogs.filter((e) => {
        // console.log(e.slug)
        // console.log(req.params.slug)
        return (e.slug == req.params.slug); //error
    });
    // console.log(myblog);
    res.render('blogPage', {
        title: myblog[0].title,
        content: myblog[0].content
    });
    // res.sendFile(path.join(__dirname, "../templates/blogPost.html"));
});
//--------------------
module.exports = router;