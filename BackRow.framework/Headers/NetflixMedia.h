/* Runtime dump - NetflixMedia
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/NetflixNrdObject.h>

@protocol NetflixNrdObjectProtocol;

@class NetflixNrdObjectCallback;
@interface NetflixMedia : NetflixNrdObject <NetflixNrdObjectProtocol>
{
    NetflixNrdObjectCallback * nccpErrorListener_;
    NetflixNrdObjectCallback * nccpMediaListener_;
    NetflixNrdObjectCallback * nccpMediaExceptionListener_;
}

@property (retain, nonatomic) NetflixNrdObjectCallback * nccpErrorListener;
@property (retain, nonatomic) NetflixNrdObjectCallback * nccpMediaListener;
@property (retain, nonatomic) NetflixNrdObjectCallback * nccpMediaExceptionListener;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NetflixMedia *)sharedInstance;

- (void)addEventListener:(NetflixNrdObjectCallback *)arg0 name:(NSString *)arg1;
- (void)removeEventListener:(NetflixNrdObjectCallback *)arg0 name:(NSString *)arg1;
- (void)handleNccpError:(NSError *)arg0;
- (void)handleMediaError:(NSError *)arg0;
- (void)handleMediaException:(NSException *)arg0;
- (void)play:(int)arg0 audioTrack:(int)arg1;
- (void)open:(unsigned int)arg0 trackId:(unsigned int)arg1 params:(NSDictionary *)arg2 playbackType:(unsigned int)arg3;
- (void)unpause:(int)arg0;
- (void)reposition:(int)arg0;
- (void)prefetch:(char)arg0;
- (NetflixNrdObjectCallback *)nccpErrorListener;
- (void)setNccpErrorListener:(NetflixNrdObjectCallback *)arg0;
- (NetflixNrdObjectCallback *)nccpMediaListener;
- (void)setNccpMediaListener:(NetflixNrdObjectCallback *)arg0;
- (NetflixNrdObjectCallback *)nccpMediaExceptionListener;
- (void)setNccpMediaExceptionListener:(NetflixNrdObjectCallback *)arg0;
- (void)dealloc;
- (NetflixMedia *)init;
- (char)handleEvent:(NSDictionary *)arg0;
- (void)close;
- (void).cxx_destruct;
- (void)stop:(int)arg0;
- (void)play:(int)arg0;
- (void)pause:(int)arg0;

@end
