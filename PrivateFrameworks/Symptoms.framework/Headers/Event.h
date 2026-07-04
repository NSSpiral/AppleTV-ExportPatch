/* Runtime dump - Event
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface Event : NSManagedObject

@property (retain, nonatomic) NSString * failureImpact;
@property (retain, nonatomic) NSString * failureString;
@property (retain, nonatomic) NSNumber * rfu1;
@property (retain, nonatomic) NSNumber * rfu2;
@property (retain, nonatomic) NSNumber * rfu3;
@property (retain, nonatomic) NSNumber * rfu4;
@property (retain, nonatomic) NSNumber * rfu5;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) NSString * syndromeID;
@property (retain, nonatomic) WiFiData * happenedOnNet;
@property (retain, nonatomic) Peer * hasPeer;
@property (retain, nonatomic) EventScene * hasScene;
@property (retain, nonatomic) NSSet * hasTshootingData;

@end
