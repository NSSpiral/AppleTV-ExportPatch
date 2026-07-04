/* Runtime dump - GQDSStylesheet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDSStylesheet : NSObject
{
    GQDRoot * mRoot;
    GQDSStylesheet * mParent;
    struct __CFDictionary * mIdentifiedStyles;
    struct __CFArray * mStylesNeedingParentResolutionInParent;
    struct __CFArray * mStylesNeedingParentResolution;
}

- (char)addStyle:(struct __CFString *)arg0 withOwnedXmlUid:(char *)arg1;
- (NSString *)styleWithIdentifier:(char *)arg0;
- (GQDSStylesheet *)initWithRoot:(NSObject *)arg0;
- (void)addStyle:(struct __CFString *)arg0 withOwnedIdentifier:(char *)arg1;
- (id)styleWithXmlUid:(char *)arg0;
- (void)addStyle:(struct __CFString *)arg0 needingParentResolution:(char *)arg1 resolveInParent:(char)arg2;
- (void)resolveStyleParents;
- (struct __CFArray *)retainedArrayOfIdentifiedStyles;
- (void)dealloc;
- (GLKShaderBlockNode *)parent;

@end
