/* Runtime dump - MMCSRequestorContext
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MMCSRequestorContext : NSObject
{
    MMCSEngine * _engine;
    char * * _signatures;
    unsigned long _count;
    unsigned long long * _itemIDs;
    unsigned int * _itemFlags;
    char * * _authTokens;
    int _type;
}

@property (weak, nonatomic) MMCSEngine * engine;
@property (nonatomic) int type;
@property (nonatomic) unsigned long count;
@property (nonatomic) unsigned long long * itemIDs;
@property (nonatomic) unsigned int * itemFlags;
@property (nonatomic) char * * signatures;
@property (nonatomic) char * * authTokens;

+ (MMCSRequestorContext *)contextWithEngine:(MMCSEngine *)arg0 type:(int)arg1;

- (void)dealloc;
- (unsigned long)count;
- (char)isEqual:(NSObject *)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (void)setCount:(unsigned long)arg0;
- (void).cxx_destruct;
- (MMCSEngine *)engine;
- (MMCSRequestorContext *)initWithEngine:(MMCSEngine *)arg0 type:(int)arg1;
- (void)setEngine:(MMCSEngine *)arg0;
- (char * *)signatures;
- (void)setSignatures:(char * *)arg0;
- (unsigned long long *)itemIDs;
- (void)setItemIDs:(unsigned long long *)arg0;
- (unsigned int *)itemFlags;
- (void)setItemFlags:(unsigned int *)arg0;
- (char * *)authTokens;
- (void)setAuthTokens:(char * *)arg0;

@end
