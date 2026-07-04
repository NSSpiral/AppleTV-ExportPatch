/* Runtime dump - ATVBoundaryTimeObserverInfo
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBoundaryTimeObserverInfo : NSObject
{
    NSArray * _times;
    id _handler;
    id _tokenFromAVPlayer;
}

@property (copy, nonatomic) NSArray * times;
@property (copy, nonatomic) id handler;
@property (retain, nonatomic) id tokenFromAVPlayer;

- (NSArray *)times;
- (void)setTimes:(NSArray *)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void).cxx_destruct;
- (CALayer *)tokenFromAVPlayer;
- (void)setTokenFromAVPlayer:(id)arg0;

@end
