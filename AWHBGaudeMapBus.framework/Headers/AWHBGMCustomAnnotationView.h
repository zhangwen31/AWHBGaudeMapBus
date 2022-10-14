//
//  AWHBGMCustomAnnotationView.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/19.
//

#import <MAMapKit/MAMapKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomCalloutView.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

typedef void(^ReturnBtnTitleBlock)(NSString *title);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMCustomAnnotationView : MAPinAnnotationView

@property (nonatomic, assign) NSUInteger count;

@property (nonatomic, readonly) AWHBPBCustomCalloutView *calloutView;
@property (nonatomic, strong) AWHBBCarModel *model;
@property (nonatomic, assign) int index;

@property(nonatomic,copy)NSString *drvPhone;
@property(nonatomic,copy)NSString *acc;
@property(nonatomic,copy)NSString *teamName;
@property(nonatomic,copy)NSString *carName;
@property(nonatomic,copy)NSString *simCard;
@property(nonatomic,copy)NSString *tmnNo;
@property(nonatomic,copy)NSString *time;
@property(nonatomic,copy)NSString *drvName;
@property(nonatomic,copy)NSString *sgn;
@property(nonatomic,copy)NSString *addr;
@property(nonatomic,copy)NSString *speed;
@property(nonatomic,copy)NSString *mile;
@property(nonatomic,copy)NSString *preMile;
@property(nonatomic,copy)NSString *carPlate;
@property(nonatomic,copy)NSString *plateColor;
@property(nonatomic,copy)NSString *bigIconLink;
@property(nonatomic,copy)NSString *carType;
@property(nonatomic,copy)NSString *carID;
@property(nonatomic,copy)NSString *stateCn;
@property(nonatomic,copy)NSString *drctCn;
@property(nonatomic,copy)NSString *moni1;
@property(nonatomic,copy)NSString *moni2;
//油量 载重  温度 湿度  水位  返回集合，每个记录包含name和value属性
@property(nonatomic,strong)NSArray *sts;
@property(nonatomic,strong)NSArray *stsName;
@property(nonatomic,strong)NSArray *stsValue;

@property (nonatomic,copy)NSString *lat;
@property (nonatomic,copy)NSString *lng;
@property (nonatomic, readwrite,strong) UILabel *countLab;
@property (nonatomic, strong) UILabel *countLabel;
@property (nonatomic, strong) UILabel *speedLab;
@property(nonatomic,assign)BOOL showBtn;
@property(nonatomic,copy)ReturnBtnTitleBlock ReturnBtnTitleBlock;
- (void)setModel:(AWHBBCarModel *)model;
-(void)setupLabel;

@end

NS_ASSUME_NONNULL_END
