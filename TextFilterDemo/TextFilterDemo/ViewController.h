//
//  ViewController.h
//  TextFilterDemo
//
//  Created by yangqi on 14-4-16.
//  Copyright (c) 2014年 yangqi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TextFilter.h"


@class TextFilter;

@interface ViewController : UIViewController<TextFilterDelegate>
{
    TextFilter *filterLen;
    TextFilter *filterNum;
    TextFilter *filterEn;
    TextFilter *filterCH;
    TextFilter *filterMoney;
}
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *txtLen;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *txtNum;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *txtEn;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *txtCH;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *txtMoney;
@end
