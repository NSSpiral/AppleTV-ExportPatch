/* Runtime dump - PLImageSource
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageSource : NSObject

@property (readonly, nonatomic) unsigned short sourceIdentifier;

- (NSSet *)newImageForAsset:(NSSet *)arg0 createMetadata:(id *)arg1;
- (unsigned short)sourceIdentifier;

@end
