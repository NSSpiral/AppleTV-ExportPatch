/* Runtime dump - TSPDataObserverInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataObserverInfo : NSObject
{
    id _observer;
    TSPData * _data;
    id _completionHandler;
    char _isInternalObserver;
    unsigned int _options;
}

@property (readonly, nonatomic) unsigned int options;
@property (readonly, nonatomic) char isInternalObserver;

- (char)shouldNotifyStatus:(int)arg0;
- (char)shouldClearObserverForStatus:(int)arg0;
- (TSPDataObserverInfo *)initWithObserver:(NSObject *)arg0 data:(TSPData *)arg1 options:(unsigned int)arg2 isInternalObserver:(char)arg3 completionHandler:(id /* block */)arg4;
- (void)notifyWithStatus:(int)arg0 info:(NSDictionary *)arg1;
- (char)isInternalObserver;
- (TSPDataObserverInfo *)init;
- (unsigned int)options;
- (void).cxx_destruct;

@end
