/* Runtime dump - BBAttachments
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding>
{
    int primaryType;
    NSCountedSet * _additionalAttachments;
    NSMutableDictionary * _clientSideComposedImageInfos;
}

@property (nonatomic) int primaryType;
@property (retain, nonatomic) NSCountedSet * additionalAttachments;
@property (retain, nonatomic) NSMutableDictionary * clientSideComposedImageInfos;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (BBAttachments *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BBAttachments *)copyWithZone:(struct _NSZone *)arg0;
- (int)primaryType;
- (unsigned int)numberOfAdditionalAttachments;
- (unsigned int)numberOfAdditionalAttachmentsOfType:(int)arg0;
- (void)setPrimaryType:(int)arg0;
- (void)addAttachmentOfType:(int)arg0;
- (char)isEqualToAttachments:(id)arg0;
- (NSCountedSet *)additionalAttachments;
- (void)setAdditionalAttachments:(NSCountedSet *)arg0;
- (NSMutableDictionary *)clientSideComposedImageInfos;
- (void)setClientSideComposedImageInfos:(NSMutableDictionary *)arg0;

@end
