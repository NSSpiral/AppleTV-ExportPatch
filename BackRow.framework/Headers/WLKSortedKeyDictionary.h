/* Runtime dump - WLKSortedKeyDictionary
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKSortedKeyDictionary : NSDictionary
{
    NSDictionary * _underlyingDictionary;
}

@property (copy, nonatomic) NSDictionary * underlyingDictionary;

- (NSDictionary *)underlyingDictionary;
- (void)setUnderlyingDictionary:(NSDictionary *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (unsigned int)count;
- (WLKSortedKeyDictionary *)initWithObjects:(id *)arg0 forKeys:(NSArray *)arg1 count:(id *)arg2;
- (NSEnumerator *)keyEnumerator;
- (void).cxx_destruct;

@end
