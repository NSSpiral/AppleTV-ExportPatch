/* Runtime dump - NetworkAttachment
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface NetworkAttachment : NSManagedObject

@property (retain, nonatomic) NSDate * firstTimeStamp;
@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSNumber * isKnownGood;
@property (retain, nonatomic) NSNumber * kind;
@property (retain, nonatomic) NSNumber * overallStayMean;
@property (retain, nonatomic) NSNumber * overallStayVar;
@property (retain, nonatomic) NSString * service;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) NSNumber * velo;
@property (retain, nonatomic) NSNumber * wasLastFailed;
@property (retain, nonatomic) NSNumber * attrs;
@property (retain, nonatomic) NSSet * hasDefaultRoute;
@property (retain, nonatomic) NSSet * supportsFlows;

@end
