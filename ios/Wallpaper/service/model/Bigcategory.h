//
//  Category.h
//  WallWrapper ( https://github.com/kysonzhu/wallpaper.git )
//
//  Created by zhujinhui on 14-12-30.
//  Copyright (c) 2014年 zhujinhui( http://kyson.cn ). All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KSModel.h"

@interface Bigcategory : KSModel

@property (nonatomic, copy) NSString *cateId;
@property (nonatomic, copy) NSString *cateName;
@property (nonatomic, copy) NSString *cateShortName;
@property (nonatomic, copy) NSString *level;
@property (nonatomic, copy) NSString *fatherId;

@end
