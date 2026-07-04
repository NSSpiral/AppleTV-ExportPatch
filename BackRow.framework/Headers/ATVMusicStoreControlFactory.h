/* Runtime dump - ATVMusicStoreControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRControlHeightFactory;

@class BRControl;
@interface ATVMusicStoreControlFactory : NSObject <BRControlFactory, BRControlHeightFactory>
{
    char _forMainMenu;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVMusicStoreControlFactory *)standardFactory;
+ (void)registerPopulator:(Class)arg0;
+ (NSObject *)mainMenuFactory;
+ (void)initialize;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (float)heightForControlForData:(NSData *)arg0 requestedBy:(BRControl *)arg1;
- (ATVMusicStoreControlFactory *)initForMainMenu:(char)arg0;
- (NSData *)_populatorForData:(NSData *)arg0;

@end
