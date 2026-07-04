/* Runtime dump - OADBlipCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBlipCollection : NSObject
{
    NSMutableArray * mBlips;
}

@property (retain, nonatomic) NSMutableArray * blips;

- (void)dealloc;
- (OADBlipCollection *)init;
- (NSMutableArray *)blips;
- (OADBlip *)blipAtIndex:(long)arg0;
- (unsigned long)addBlip:(id)arg0;
- (unsigned long)blipCount;
- (void)setBlips:(NSMutableArray *)arg0;

@end
