/* Runtime dump - PDComment
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDComment : NSObject
{
    struct CGPoint mPosition;
    NSString * mText;
    unsigned int mAuthorId;
    NSDate * mDate;
    unsigned int mIndex;
}

- (void)dealloc;
- (PDComment *)init;
- (NSDate *)date;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setPosition:(struct CGPoint)arg0;
- (struct CGPoint)position;
- (void)setDate:(NSDate *)arg0;
- (unsigned int)index;
- (void).cxx_construct;
- (void)setIndex:(unsigned int)arg0;
- (void)setAuthorId:(unsigned int)arg0;
- (unsigned int)authorId;

@end
