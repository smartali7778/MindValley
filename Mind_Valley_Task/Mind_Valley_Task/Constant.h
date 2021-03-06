//
//  Constant.h
//  Mind_Valley_Task
//
//  Created by Ali Akhtar on 5/24/17.
//  Copyright © 2017 Ali Akhtar. All rights reserved.
//
#import <Foundation/Foundation.h>
#ifndef Constant_h
#define Constant_h





typedef NS_ENUM(NSInteger, API_TYPE) {
   
    PULL_TO_REFRESH   = 1,
    SHOW_MORE  = 2,
    DEFAULT = 3
};


typedef NS_ENUM(NSInteger, ImageRecordState) {
    
    New   = 1,
    
    Downloaded  = 2,
    Failed = 3,
    InProgress  = 4 ,
    Cancel
    
};


#define AS @"Dd"
#endif /* Constant_h */
