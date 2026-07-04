/* Runtime dump - AppRun
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface AppRun : NSManagedObject

@property (retain, nonatomic) NSNumber * kind;
@property (retain, nonatomic) NSDate * timeEnd;
@property (retain, nonatomic) NSDate * timeStart;
@property (retain, nonatomic) NSNumber * wifiIN_end;
@property (retain, nonatomic) NSNumber * wifiIN_start;
@property (retain, nonatomic) NSNumber * wifiOUT_end;
@property (retain, nonatomic) NSNumber * wifiOUT_start;
@property (retain, nonatomic) NSNumber * wwanIN_end;
@property (retain, nonatomic) NSNumber * wwanIN_start;
@property (retain, nonatomic) NSNumber * wwanOUT_end;
@property (retain, nonatomic) NSNumber * wwanOUT_start;
@property (retain, nonatomic) NSNumber * wiredIN_end;
@property (retain, nonatomic) NSNumber * wiredIN_start;
@property (retain, nonatomic) NSNumber * wiredOUT_end;
@property (retain, nonatomic) NSNumber * wiredOUT_start;
@property (retain, nonatomic) App * hasApp;

@end
