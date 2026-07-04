/* Runtime dump - LiveUsage
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface LiveUsage : NSManagedObject

@property (retain, nonatomic) NSNumber * kind;
@property (retain, nonatomic) NSNumber * tag;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) NSNumber * wifiIN;
@property (retain, nonatomic) NSNumber * wifiOUT;
@property (retain, nonatomic) NSNumber * wwanIN;
@property (retain, nonatomic) NSNumber * wwanOUT;
@property (retain, nonatomic) NSNumber * wiredIN;
@property (retain, nonatomic) NSNumber * wiredOUT;
@property (retain, nonatomic) NSNumber * metadata;
@property (retain, nonatomic) Process * hasProcess;
@property (retain, nonatomic) Process * hintedBy;

@end
