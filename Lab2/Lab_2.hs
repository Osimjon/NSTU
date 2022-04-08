main :: IO()
main = do
  putStrLn "Enter a"
  aStr <- getLine
  let x = (read aStr :: Double)
  putStrLn ("Result:" ++ show((4*x)*(4*x)))
