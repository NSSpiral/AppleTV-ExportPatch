/* Runtime dump - MCResourceProgressObserver
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCResourceProgressObserver : NSObject
{
    NSString * _name;
    NSProgress * _progress;
    id _cancelHandler;
}

@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) NSProgress * progress;
@property (copy, nonatomic) id cancelHandler;

- (void)setCancelHandler:(id /* block */)arg0;
- (MCResourceProgressObserver *)initWithName:(NSString *)arg0 progress:(NSProgress *)arg1 cancelHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)invalidate;
- (void)setProgress:(NSProgress *)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSProgress *)progress;
- (id /* block */)cancelHandler;

@end
