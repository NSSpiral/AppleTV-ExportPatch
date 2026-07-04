/* Runtime dump - BRNowPlayingControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;

@class BRControl;
@interface BRNowPlayingControlFactory : NSObject <BRControlFactory>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)_nowPlayingSelected;
+ (BRNowPlayingControlFactory *)factory;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (NSData *)_nowPlayingListItemForData:(NSData *)arg0 currentControl:(BRControl *)arg1;
- (NSData *)_nowPlayingPosterItemForData:(NSData *)arg0 currentControl:(BRControl *)arg1;

@end
