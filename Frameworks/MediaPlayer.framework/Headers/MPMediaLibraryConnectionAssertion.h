/* Runtime dump - MPMediaLibraryConnectionAssertion
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryConnectionAssertion : NSObject
{
    MPMediaLibrary * _library;
    NSString * _identifier;
}

@property (readonly, nonatomic) NSString * identifier;

- (NSObject *)_initWithMediaLibrary:(MPMediaLibrary *)arg0 identifier:(NSString *)arg1;
- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (void).cxx_destruct;

@end
