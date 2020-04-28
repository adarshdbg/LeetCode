using VL = vector< long >;
class Solution {
    static const int MOD = 1000000007;
    vector<VL> hops{
        { 4, 6 },  { 6, 8 },  { 7, 9 },  { 4, 8 },  { 0, 3, 9 },  { },  { 0, 1, 7 },  { 2, 6 },  { 1, 3 },  { 2, 4 }
    };
public:
    int knightDialer( int N ){
        VL cur( 10, 1 );
        for(  VL next( 10, 0 );  --N > 0;  next=VL( 10, 0 )  ){
            for( int i=0;  i <= 9;  ++i )
                for( auto hop: hops[ i ] )
                    next[ i ] += cur[ hop ] % MOD;
            cur.swap( next );
        }
        return accumulate( cur.begin(), cur.end(), 0L ) % MOD;
    }
};