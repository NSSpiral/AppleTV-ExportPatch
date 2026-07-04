/* Runtime dump - GQDBGObjectPlaceholder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBGObjectPlaceholder : GQDBGPlaceholder <GQDNameMappable>
{
    char * mContentType;
    GQDDrawable * mDrawable;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (void)dealloc;
- (TSDDrawableInfo *)drawable;

@end
