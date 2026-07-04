/* Runtime dump - WDHyperlinkFieldMarker
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDHyperlinkFieldMarker : WDFieldMarker
{
    NSString * mLink;
    NSString * mFragment;
    id mInternalLink;
}

@property (retain, nonatomic) NSString * link;
@property (retain, nonatomic) NSString * fragment;
@property (nonatomic) char internalLink;

- (void)dealloc;
- (NSString *)fragment;
- (void)setLink:(NSString *)arg0;
- (NSString *)link;
- (void)setFragment:(NSString *)arg0;
- (char)internalLink;
- (int)runType;
- (void)setInternalLink:(char)arg0;

@end
