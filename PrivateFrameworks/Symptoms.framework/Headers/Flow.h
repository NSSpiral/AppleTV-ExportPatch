/* Runtime dump - Flow
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface Flow : NSManagedObject

@property (retain, nonatomic) NSDate * firstTimeStamp;
@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSNumber * kind;
@property (retain, nonatomic) NSString * remoteID;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) NSSet * hasLivePerformance;
@property (retain, nonatomic) NetworkAttachment * onNetwork;

@end
