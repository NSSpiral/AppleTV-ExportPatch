/* Runtime dump - WDListDefinition
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDListDefinition : NSObject <NSCopying>
{
    WDDocument * mDocument;
    long mListDefinitionId;
    NSString * mStyleId;
    NSString * mStyleRefId;
    int mType;
    NSMutableArray * mLevels;
}

@property (readonly, nonatomic) long listDefinitionId;
@property (readonly, nonatomic) NSString * styleId;
@property (copy, nonatomic) NSString * styleRefId;

- (void)dealloc;
- (void)setType:(int)arg0;
- (int)type;
- (WDListDefinition *)copyWithZone:(struct _NSZone *)arg0;
- (long)listDefinitionId;
- (id)levelAt:(int)arg0;
- (int)levelCount;
- (NSString *)styleId;
- (id)addLevel;
- (WDListDefinition *)initWithDocument:(NSObject *)arg0 listDefinitionId:(long)arg1 styleId:(NSString *)arg2;
- (NSString *)styleRefId;
- (void)setStyleRefId:(NSString *)arg0;

@end
