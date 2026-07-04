/* Runtime dump - Process
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface Process : NSManagedObject

@property (retain, nonatomic) NSString * bundleName;
@property (retain, nonatomic) NSDate * firstTimeStamp;
@property (retain, nonatomic) NSString * procName;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) NSSet * hasLiveUsage;
@property (retain, nonatomic) LiveUsage * hintLiveUsage;

@end
