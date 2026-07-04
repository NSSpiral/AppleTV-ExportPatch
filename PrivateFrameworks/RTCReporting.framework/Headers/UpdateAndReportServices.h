/* Runtime dump - UpdateAndReportServices
 * Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@interface UpdateAndReportServices : NSObject
{
    BOOL _update;
    BOOL _report;
    id _block;
}

@property (readonly) BOOL update;
@property (readonly) BOOL report;
@property (copy) id block;

- (void)dealloc;
- (BOOL)update;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg0;
- (BOOL)report;
- (UpdateAndReportServices *)initWithServices:(BOOL)arg0 needToReport:(BOOL)arg1 service:(NSObject *)arg2;

@end
