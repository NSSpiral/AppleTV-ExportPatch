/* Runtime dump - Logger
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface Logger : NSObject
{
    NSMutableSet * traceAreas_;
    NSMutableArray * traceAreasStack_;
    char logAll_;
    char logEnabled_;
}

@property (nonatomic) char logEnabled;
@property (nonatomic) char logAll;
@property (retain, nonatomic) NSMutableSet * traceAreas;
@property (retain, nonatomic) NSMutableArray * traceAreasStack;

+ (Logger *)sharedInstance;

- (void)setLogEnabled:(char)arg0;
- (char)logEnabled;
- (void)log:(NSData *)arg0 message:(NSString *)arg1;
- (NSMutableSet *)traceAreas;
- (void)setTraceAreas:(NSMutableSet *)arg0;
- (NSMutableArray *)traceAreasStack;
- (char)logAll;
- (void)pushTraceAreas;
- (void)popTraceAreas;
- (void)addTraceArea:(id)arg0;
- (void)addTraceAreaWithSet:(NSSet *)arg0;
- (void)removeTraceArea:(id)arg0;
- (void)removeAllTraceAreas;
- (void)log:(NSData *)arg0 function:(char *)arg1 line:(int)arg2 message:(NSString *)arg3;
- (void)setLogAll:(char)arg0;
- (void)setTraceAreasStack:(NSMutableArray *)arg0;
- (void)dealloc;
- (Logger *)init;
- (void).cxx_destruct;

@end
