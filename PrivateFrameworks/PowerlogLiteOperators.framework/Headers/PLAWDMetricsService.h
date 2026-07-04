/* Runtime dump - PLAWDMetricsService
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDMetricsService : PLService
{
    AWDServerConnection * _awdServerConn;
    NSMutableSet * _currRunningMetrics;
    NSMutableSet * _updateRunningMetrics;
    NSMutableDictionary * _classDictionary;
}

@property (retain) AWDServerConnection * awdServerConn;
@property (retain) NSMutableSet * currRunningMetrics;
@property (retain) NSMutableSet * updateRunningMetrics;
@property (retain) NSMutableDictionary * classDictionary;

+ (void)load;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;

- (PLAWDMetricsService *)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (AWDServerConnection *)awdServerConn;
- (void)setAwdServerConn:(AWDServerConnection *)arg0;
- (char)initAWDInterface;
- (NSMutableDictionary *)classDictionary;
- (char)connectToAWDServer;
- (NSMutableSet *)currRunningMetrics;
- (void)auxClassWrapper:(NSObject *)arg0 withAction:(int)arg1;
- (void)setCurrRunningMetrics:(NSMutableSet *)arg0;
- (void)setClassDictionary:(NSMutableDictionary *)arg0;
- (void)setUpdateRunningMetrics:(NSMutableSet *)arg0;
- (NSMutableSet *)updateRunningMetrics;
- (void)threadFunc;

@end
