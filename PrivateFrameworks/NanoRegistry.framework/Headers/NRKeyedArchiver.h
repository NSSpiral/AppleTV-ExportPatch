/* Runtime dump - NRKeyedArchiver
 * Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRKeyedArchiver : NSKeyedArchiver
{
    char _archiveSecureItems;
}

@property (nonatomic) char archiveSecureItems;

- (char)archiveSecureItems;
- (void)setArchiveSecureItems:(char)arg0;

@end
