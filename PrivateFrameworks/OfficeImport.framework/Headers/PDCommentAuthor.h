/* Runtime dump - PDCommentAuthor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDCommentAuthor : NSObject
{
    unsigned int mId;
    NSString * mName;
    NSString * mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (void)dealloc;
- (PDCommentAuthor *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (unsigned int)id;
- (void)setId:(unsigned int)arg0;
- (unsigned int)colorIndex;
- (void)setColorIndex:(unsigned int)arg0;
- (void)setLastCommentIndex:(unsigned int)arg0;
- (id)initials;
- (void)setInitials:(id)arg0;
- (unsigned int)lastCommentIndex;

@end
