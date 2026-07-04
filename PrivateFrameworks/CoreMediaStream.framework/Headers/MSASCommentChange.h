/* Runtime dump - MSASCommentChange
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASCommentChange : NSObject
{
    MSASComment * _comment;
    int _deletionIndex;
    int _type;
}

@property (retain, nonatomic) MSASComment * comment;
@property (nonatomic) int deletionIndex;
@property (nonatomic) int type;

- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (void).cxx_destruct;
- (int)deletionIndex;
- (void)setDeletionIndex:(int)arg0;
- (void)setComment:(MSASComment *)arg0;
- (MSASComment *)comment;

@end
