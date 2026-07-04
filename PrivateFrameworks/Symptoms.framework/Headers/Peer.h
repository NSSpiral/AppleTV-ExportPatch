/* Runtime dump - Peer
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface Peer : NSManagedObject

@property (retain, nonatomic) NSNumber * address;
@property (retain, nonatomic) NSNumber * dstPort;
@property (retain, nonatomic) NSString * fqdn;
@property (retain, nonatomic) NSNumber * rfu1;
@property (retain, nonatomic) NSNumber * rfu2;
@property (retain, nonatomic) NSNumber * rfu3;
@property (retain, nonatomic) NSNumber * rfu4;
@property (retain, nonatomic) NSNumber * rfu5;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) Event * withEvent;

@end
