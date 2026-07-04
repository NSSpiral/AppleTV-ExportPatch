/* Runtime dump - NetflixLog
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/NetflixNrdObject.h>

@protocol NetflixNrdObjectProtocol;
@interface NetflixLog : NetflixNrdObject <NetflixNrdObjectProtocol>

@property (copy) NSArray * traceAreas;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NetflixLog *)sharedInstance;

- (void)log:(unsigned int)arg0 message:(NSString *)arg1;
- (NSArray *)traceAreas;
- (void)setTraceAreas:(NSArray *)arg0;
- (void)debug:(CDDebug *)arg0;
- (void)info:(NSDictionary *)arg0;
- (void)fatal:(id)arg0;
- (void)trace:(OITSUBacktrace *)arg0;
- (NetflixLog *)init;
- (char)handleEvent:(NSDictionary *)arg0;
- (void)error:(NSError *)arg0;

@end
