![Alt text](/https://raw.githubusercontent.com/dmwesterhoff/DWRandom/master/logo.png?raw=true "DWRandom")
-------------------------------------------------------------------------------

[![CI Status](https://travis-ci.org/dmwesterhoff/DWRandom.svg?branch=master)](https://travis-ci.org/David Westerhoff/DWRandom)
[![Version](https://img.shields.io/cocoapods/v/DWRandom.svg?style=flat)](http://cocoapods.org/pods/DWRandom)
[![License](https://img.shields.io/cocoapods/l/DWRandom.svg?style=flat)](http://cocoapods.org/pods/DWRandom)
[![Platform](https://img.shields.io/cocoapods/p/DWRandom.svg?style=flat)](http://cocoapods.org/pods/DWRandom)

Sometimes life calls for a bit of randomness.

Whether or not its grabbing a marble from a bag, a card from a deck or
something else entirely this library will give you a simple yet powerful
addition to Foundation objects functionality, random behavior.

DWRandom is a lightweight framework written in Objective-C that makes working
with randomization in many of the Foundation core objects a breeze. The
interface is extension based and aims to be dead simple to use and
effortless to learn. Use DWRandom if you want to add a deadly one liner for
randomization in your project.

### Table of Contents
---------------------

* [Install](#install)
* [Usage](#usage)
* [Examples](#examples)
* [Docs](#docs)
* [Contributing](#contributing)
* [History](#history)
* [Roadmap](#roadmap)
* [Author](#author)
* [License](#license)

### Install
-----------

###### Cocoapods

DWRandom is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```
pod "DWRandom"
```

Now you can add to your project with

```objc
#import <DWRandom/DWRandom.h>
```

###### Source

You can clone the repo with git:

```
git clone https://github.com/dmwesterhoff/DWRandom.git
```

then simply add the files to your project, and use a local import header

```objc
#import "DWRandom.h"
```

### Usage
---------

To make things easy to remember all methods in the DWRandom library are 
prefixed with the word 'random'. For example choosing a random element from
an array.

```objc
id randomObject = [array randomObject];
```

or grabbing a random UIColor...

```objc
UIColor *randomColor = [UIColor randomColor];
```

Easy to remember right? Heres a comprehensive list of all available methods,
for copy-paste snippets showing many examples check out the 
[Examples](#examples)


#### Foundation+DWRandom
------------------------

###### NSArray

```objc
- (id)randomObject;
+ (NSArray*)randomShuffle:(NSArray*)array;
```

###### NSMutableArray

```objc
- (id)randomObject;
- (void)randomShuffle;
+ (NSMutableArray*)randomShuffle:(NSMutableArray*)array;
```

###### NSDictionary

```objc
- (id)randomKey;
- (id)randomValue;
```

###### NSMutableDictionary

```objc
- (id)randomKey;
- (id)randomValue;
```

###### NSSet

```objc
- (id)randomObject;
```

###### NSMutableSet

```objc
- (id)randomObject;
```

###### NSOrderedSet

```objc
- (id)randomObject;
```

###### NSCountedSet

```objc
- (id)randomObject;
```

###### NSData

```objc
+ (NSData*)randomDataOfLength:(NSUInteger)length;
```

###### NSNumber

```objc
+ (unsigned int)randomInteger;
+ (unsigned int)randomIntegerWithMax:(unsigned int)max;
+ (unsigned int)randomIntegerWithMin:(unsigned int)min
                                 max:(unsigned int)max;
+ (NSNumber*)randomNumber;
+ (NSNumber*)randomNumberWithMax:(unsigned int)max;
+ (NSNumber*)randomNumberWithMin:(unsigned int)min
                             max:(unsigned int)max;
```

###### NSString

```objc
- (NSString*)randomCharacter;
+ (NSString*)randomStringOfLength:(NSUInteger)length;
+ (NSString*)randomStringOfLength:(NSUInteger)length
                           option:(DWRandomStringOption)option;
+ (NSString*)randomStringOfLength:(NSUInteger)length
                     characterSet:(NSString*)characterSet;
+ (NSString*)randomShuffle:(NSString*)string;
```

###### NSMutableString

```objc
- (void)randomShuffle;
- (NSString*)randomCharacter;
```

#### UIKit+DWRandom
-------------------

###### UIColor

```objc
+ (UIColor*)randomColor;
+ (UIColor*)randomColorWithAlpha:(CGFloat)alpha;
+ (UIColor*)randomColorWithRandomAlpha;
```

### Examples
------------

Coming soon...

### Docs
--------

You can check out the full reference documentation 
[here](http://cocoadocs.org/docsets/DWRandom/)

### Contributing
----------------

1. Fork it
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

### History
-----------

v0.1.0 - Intial project release *(3/6/16)*

### Roadmap
-----------

Coming soon...

### References
--------------

Coming soon...

### Author
----------

David Westerhoff - dmwesterhoff@gmail.com

### License
-----------

The MIT License (MIT)

Copyright (c) 2016 David M. Westerhoff

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
