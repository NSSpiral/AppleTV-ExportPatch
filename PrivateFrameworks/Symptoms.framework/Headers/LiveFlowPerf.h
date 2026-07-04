/* Runtime dump - LiveFlowPerf
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface LiveFlowPerf : NSManagedObject

@property (retain, nonatomic) NSNumber * connAttempts;
@property (retain, nonatomic) NSNumber * connSuccesses;
@property (retain, nonatomic) NSNumber * kind;
@property (retain, nonatomic) NSNumber * overallTime;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) NSNumber * timesThresholded;
@property (retain, nonatomic) NSString * tmpID;
@property (retain, nonatomic) NSNumber * txFailPackets;
@property (retain, nonatomic) NSNumber * txPackets;
@property (retain, nonatomic) NSNumber * txReTxInterval;
@property (retain, nonatomic) NSNumber * txReTxPackets;
@property (retain, nonatomic) NSNumber * usecsEstabTime;
@property (retain, nonatomic) NSString * tag;
@property (retain, nonatomic) Flow * hasFlow;

@end
