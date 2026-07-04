/* Runtime dump - OCXSStreamLevel
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXSStreamLevel : NSObject
{
    char * mName;
    int mDepth;
}

@property (nonatomic) char * name;
@property (nonatomic) int depth;

- (void)setName:(char *)arg0;
- (char *)name;
- (int)depth;
- (void)setDepth:(int)arg0;

@end
