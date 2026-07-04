/* Runtime dump - GQDWebView
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWebView : GQDGraphic <GQDNameMappable>
{
    GQDImageBinary * mImageBinary;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (id)imageBinary;
- (void)dealloc;

@end
