/* Runtime dump - AppTypicalUsage
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface AppTypicalUsage : NSManagedObject

@property (retain, nonatomic) NSDate * firstTimeStamp;
@property (retain, nonatomic) NSNumber * intervalType;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) NSNumber * wifiIN_M2;
@property (retain, nonatomic) NSNumber * wifiIN_mean;
@property (retain, nonatomic) NSNumber * wifiIN_var;
@property (retain, nonatomic) NSNumber * wifiOUT_M2;
@property (retain, nonatomic) NSNumber * wifiOUT_mean;
@property (retain, nonatomic) NSNumber * wifiOUT_var;
@property (retain, nonatomic) NSNumber * wifiSampleCount;
@property (retain, nonatomic) NSNumber * wwanIN_M2;
@property (retain, nonatomic) NSNumber * wwanIN_mean;
@property (retain, nonatomic) NSNumber * wwanIN_var;
@property (retain, nonatomic) NSNumber * wwanOUT_M2;
@property (retain, nonatomic) NSNumber * wwanOUT_mean;
@property (retain, nonatomic) NSNumber * wwanOUT_var;
@property (retain, nonatomic) NSNumber * wwanSampleCount;
@property (retain, nonatomic) NSNumber * wiredIN_M2;
@property (retain, nonatomic) NSNumber * wiredIN_mean;
@property (retain, nonatomic) NSNumber * wiredIN_var;
@property (retain, nonatomic) NSNumber * wiredOUT_M2;
@property (retain, nonatomic) NSNumber * wiredOUT_mean;
@property (retain, nonatomic) NSNumber * wiredOUT_var;
@property (retain, nonatomic) NSNumber * wiredSampleCount;
@property (retain, nonatomic) NSNumber * wifiIN;
@property (retain, nonatomic) NSNumber * wifiOUT;
@property (retain, nonatomic) NSNumber * wwanIN;
@property (retain, nonatomic) NSNumber * wwanOUT;
@property (retain, nonatomic) NSNumber * wiredIN;
@property (retain, nonatomic) NSNumber * wiredOUT;
@property (retain, nonatomic) App * hasApp;

@end
