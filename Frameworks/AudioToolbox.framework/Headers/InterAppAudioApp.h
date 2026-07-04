/* Runtime dump - InterAppAudioApp
 * Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface InterAppAudioApp : NSObject
{
    char _isHost;
    char _isCurrentApp;
    int _key;
    NSString * _name;
    UIImage * _icon;
    NSURL * _url;
}

@property (readonly, nonatomic) int key;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) UIImage * icon;
@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) char isHost;
@property (readonly, nonatomic) char isCurrentApp;

- (InterAppAudioApp *)init:(struct InterAppAudioAppInfo *)arg0 iconSize:(struct InterAppAudioAppInfo)arg1;
- (UIImage *)icon;
- (char)isHost;
- (char)isCurrentApp;
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (int)key;
- (NSURL *)url;

@end
