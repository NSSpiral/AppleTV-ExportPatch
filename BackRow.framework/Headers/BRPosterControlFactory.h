/* Runtime dump - BRPosterControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRControlHeightFactory;

@class BRControl;
@interface BRPosterControlFactory : NSObject <BRControlFactory, BRControlHeightFactory>
{
    ATVImage * _defaultImage;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRPosterControlFactory *)factory;

- (void)setDefaultImage:(ATVImage *)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (float)heightForControlForData:(NSData *)arg0 requestedBy:(BRControl *)arg1;
- (NSSet *)_posterForShelfFromAsset:(NSSet *)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (NSSet *)_posterForGridFromAsset:(NSSet *)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (NSSet *)_posterFromAsset:(NSSet *)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (void)dealloc;
- (BRPosterControlFactory *)init;

@end
