//
//  AWHBGMPathTrackViewController.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/19.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBPublicBusiness/AWHBPBCountDataModel.h>
#import <AWHBPublicBusiness/AWHBPBStopDataModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMPathTrackViewController : AWHBBBaseViewController
@property(nonatomic,strong)NSMutableArray *pathArray;
@property(nonatomic,strong)NSMutableArray *stopDataArray;
@property(nonatomic,strong)AWHBPBCountDataModel *countDataModel;
@property(nonatomic,copy)NSString *startAddr;
@property(nonatomic,copy)NSString *startTime;
@property(nonatomic,copy)NSString *endTime;
@property(nonatomic,copy)NSString *endAddr;
@property(nonatomic,copy) void (^selectFunctionBlock)(NSString *name);
@property(nonatomic,copy) void (^clickStopDataBlock)(AWHBPBStopDataModel *stopModel);
- (void)stopPlay;
@end

NS_ASSUME_NONNULL_END
