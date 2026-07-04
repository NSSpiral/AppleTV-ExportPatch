/* Runtime dump - LiveRoutePerf
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface LiveRoutePerf : NSManagedObject

@property (retain, nonatomic) NSNumber * bytesIn;
@property (retain, nonatomic) NSNumber * bytesOut;
@property (retain, nonatomic) NSNumber * connAttempts;
@property (retain, nonatomic) NSNumber * connSuccesses;
@property (retain, nonatomic) NSNumber * epochs;
@property (retain, nonatomic) NSNumber * faultyStay;
@property (retain, nonatomic) NSNumber * kind;
@property (retain, nonatomic) NSNumber * lowqStay;
@property (retain, nonatomic) NSNumber * overallStay;
@property (retain, nonatomic) NSNumber * packetsIn;
@property (retain, nonatomic) NSNumber * packetsOut;
@property (retain, nonatomic) NSNumber * reTxBytes;
@property (retain, nonatomic) NSNumber * rttAvg;
@property (retain, nonatomic) NSNumber * rttMin;
@property (retain, nonatomic) NSNumber * rttVar;
@property (retain, nonatomic) NSNumber * rxDupeBytes;
@property (retain, nonatomic) NSNumber * rxOOOBytes;
@property (retain, nonatomic) NSNumber * overallStayM2;
@property (retain, nonatomic) NSDate * timeStamp;
@property (retain, nonatomic) NSNumber * topDownloadRate;
@property (retain, nonatomic) NetworkAttachment * hasNetworkAttachment;

@end
