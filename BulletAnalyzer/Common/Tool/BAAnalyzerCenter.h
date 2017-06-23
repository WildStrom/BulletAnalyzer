//
//  BAAnalyzerCenter.h
//  BulletAnalyzer
//
//  Created by 张骏 on 17/6/8.
//  Copyright © 2017年 Zj. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BAReportModel, BABulletModel;

@interface BAAnalyzerCenter : NSObject

/**
 分析报告数组
 */
@property (nonatomic, strong) NSMutableArray *reportModelArray;

/**
 是否正在分析
 */
@property (nonatomic, assign, getter=isAnalyzing) BOOL analyzing;

/**
 需要继续分析的模型
 */
@property (nonatomic, strong) BAReportModel *proceedReportModel;

/**
 关注对象数组
 */
@property (nonatomic, strong) NSMutableArray *noticeArray;

/**
 清理内存计时器
 */
@property (nonatomic, strong) NSTimer *cleanTimer;

/**
 创建单粒对象
 */
+ (BAAnalyzerCenter *)defaultCenter;

/**
 开始分析
 */
- (void)beginAnalyzing;

/**
 分析被异常打断
 */
- (void)interruptAnalyzing;

/**
 结束分析
 */
- (void)endAnalyzing;

/**
 删除报告
 */
- (void)delReport:(BAReportModel *)report;

/**
 添加关注对象
 */
- (void)addNotice:(BABulletModel *)bulletModel;

/**
 删除关注对象
 */
- (void)delNotice:(BABulletModel *)BABulletModel;

@end
