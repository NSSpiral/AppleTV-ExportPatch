/* Runtime dump - CHDOfficeArtClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDOfficeArtClient : NSObject <OADClient>
{
    CHDAnchor * mAnchor;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (struct CGRect)bounds;
- (NSString *)anchor;
- (void)setAnchor:(PLImageViewWithAnimatedAnchor *)arg0;
- (char)hasBounds;

@end
