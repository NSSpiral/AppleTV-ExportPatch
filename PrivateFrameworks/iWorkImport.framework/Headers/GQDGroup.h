/* Runtime dump - GQDGroup
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDGroup : GQDDrawable <GQDNameMappable>
{
    struct __CFArray * mDrawables;
    GQDWPExternalTextWrap * mExternalTextWrap;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (id)externalTextWrap;
- (void)dealloc;
- (struct __CFArray *)drawables;

@end
