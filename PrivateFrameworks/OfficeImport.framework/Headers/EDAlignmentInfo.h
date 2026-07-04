/* Runtime dump - EDAlignmentInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject>
{
    int mHorizontalAlignment;
    int mVerticalAlignment;
    int mIndent;
    int mTextRotation;
    BOOL mTextWrapped;
    BOOL mHorizontalAlignOverridden;
    BOOL mVerticalAlignOverridden;
    BOOL mIndentOverridden;
    BOOL mTextWrappedOveridden;
    BOOL mDoNotModify;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (EDAlignmentInfo *)alignmentInfo;

- (EDAlignmentInfo *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (EDAlignmentInfo *)copyWithZone:(struct _NSZone *)arg0;
- (BOOL)isVerticalAlignOverridden;
- (int)verticalAlignment;
- (void)setIndent:(int)arg0;
- (BOOL)isHorizontalAlignOverridden;
- (int)horizontalAlignment;
- (BOOL)isTextWrapped;
- (int)textRotation;
- (int)indent;
- (BOOL)isTextWrappedOverridden;
- (BOOL)isIndentOverridden;
- (char)isEqualToAlignmentInfo:(NSDictionary *)arg0;
- (void)setDoNotModify:(BOOL)arg0;
- (void)setHorizontalAlignment:(int)arg0;
- (void)setTextWrapped:(BOOL)arg0;
- (void)setTextRotation:(int)arg0;
- (void)setVerticalAlignment:(int)arg0;

@end
