/* Runtime dump - TDRenditionEntry
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDRenditionEntry : NSObject
{
    struct _renditionkeytoken * key;
    id stackKey;
    struct _renditionkeyfmt * keyFormat;
    NSData * assetData;
    TDRenditionSpec * renditionSpec;
}

@property (readonly, retain, nonatomic) TDRenditionSpec * renditionSpec;
@property (readonly, retain, nonatomic) NSData * assetData;

- (void)dealloc;
- (int)compare:(NSObject *)arg0;
- (NSData *)assetData;
- (TDRenditionEntry *)initWithKey:(struct _renditionkeytoken *)arg0 keyFormat:(struct _renditionkeytoken)arg1 assetData:(struct _renditionkeyfmt *)arg2 renditionSpec:(struct _renditionkeyfmt)arg3;
- (TDRenditionSpec *)renditionSpec;

@end
