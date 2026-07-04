/* Runtime dump - OADDrawable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDrawable : NSObject
{
    char mHidden;
    unsigned long mId;
    OADDrawableProperties * mDrawableProperties;
    <OADClient> * mClientData;
    OADDrawable<OADDrawableContainer> * mParent;
}

+ (unsigned long)generateOADDrawableId:(NSObject *)arg0;

- (void)dealloc;
- (void)setHidden:(char)arg0;
- (NSData *)clientData;
- (unsigned long)id;
- (NSDictionary *)drawableProperties;
- (void)setClientData:(NSData *)arg0;
- (void)setId:(unsigned long)arg0;
- (NSObject *)ensureClientDataOfClass:(Class)arg0;
- (id)createOrientedBoundsWithBounds:(struct CGRect)arg0;
- (OADDrawable *)initWithPropertiesClass:(Class)arg0;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(NSObject *)arg0;
- (NSObject *)createWordClientDataWithTextType:(int)arg0;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(NSObject *)arg0;
- (char)hidden;
- (void)setDrawableProperties:(NSDictionary *)arg0;

@end
