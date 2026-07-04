/* Runtime dump - PptMetaCharacterBlock
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PptMetaCharacterBlock : NSObject
{
    int mType;
    int mPosition;
    int mExtraData;
}

- (int)type;
- (void)setPosition:(int)arg0;
- (int)position;
- (PptMetaCharacterBlock *)initWithType:(int)arg0 position:(int)arg1 extraData:(int)arg2;
- (PptMetaCharacterBlock *)initWithType:(int)arg0 position:(int)arg1;
- (int)extraData;

@end
